import pyttsx3 
import datetime
import speech_recognition as sr
import wikipedia
import webbrowser
import os

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')

engine.setProperty('voices', voices[0].id)

def speak(audio):
    engine.say(audio)
    engine.runAndWait()

def wishMe():
    hour = int(datetime.datetime.now().hour)
    if hour>=12:
        speak("Good Morning sir!")

    elif hour>=12 and hour<18:
        speak("Good Afternoon sir!")

    else:
        speak("Good Evening sir!")

    speak("I'm Your assistant Timothy. Please tell me how may I help you ")

def takeCommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("listening...")
        r.pause_threshold = 1
        audio = r.listen(source)
    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said: {query}\n")

    except Exception as e:
        print("sorry sir can you please repeat")
        return 'None'
    
    return query


if __name__ == "__main__":
    wishMe() 
    
    while True:

        query = takeCommand().lower()
        if 'wikipedia' in query:
            speak("searching Wikipedia...")
            query = query.replace('wikipedia',"")
            result = wikipedia.summary(query, sentences=2)
            speak("According to Wikipedia..")
            print(result)
            speak(result)

        elif "open youtube" in query:
            webbrowser.open("youtube.com")

        elif "open google" in query:
            webbrowser.open("google.com")

        elif "open spotify" in query:
            webbrowser.open("spotify.com")

        elif "play anime" in query:
            anime_dir = 'C:\\anime'
            anime = os.listdir(anime_dir)
            os.startfile(os.path.join(anime_dir, anime[5]))

        elif "the time" in query:
            strtime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"Sir, the time is {strtime}")

        elif "open code" in query:
            codepath = "C:\\Users\\dhruv\\AppData\\Local\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(codepath)