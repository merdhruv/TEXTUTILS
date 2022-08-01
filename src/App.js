import './App.css';
import React, {useState} from 'react';
import Navbar from './components/Navbar'
// import About from './components/About'
import TextForm from './components/TextForm';
import Alert from './components/Alert';
// import {
//   BrowserRouter as Router,
//   Route,
//   Switch
// } from "react-router-dom";

function App() {
  const [mode, setmode] = useState('light');
  const [alert, setAlert]=useState(null);

  const showAlert = (message, type)=>{
    setAlert({
      msg: message,
      type: type
    })
    setTimeout(() => {
      showAlert(null);
    }, 3000);
  }

  const toggleMode = ()=>{
    if(mode==='light'){
      setmode('dark');
      document.body.style.backgroundColor = '#04214b';
      showAlert('Dark Mode has been enabled',"success")
    }
    else{
      setmode('light');
      document.body.style.backgroundColor = 'white';
      showAlert('Light Mode has been enabled',"success")
    }
  }
  return (
    <>
    {/* <Router> */}
      <Navbar title='TextUtils' mode ={mode} toggleMode ={toggleMode} about ='aboutTextUtils'/>
      <Alert alert = {alert}/>
      <div className="container my-3">
      {/* <Switch>
        <Route exact path="/about">
          <About/>
        </Route> */}
        {/* <Route exact path="/"> */}
          <TextForm heading="Enter text to analyze"  mode={mode} showAlert={showAlert} />
        {/* </Route> */}
      {/* </Switch> */}
      {/* <About /> */}
    </div>
    {/* </Router> */}

  </>
  );
}

export default App;
