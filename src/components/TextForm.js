import React,{useState} from 'react'

export default function TextForm(props) {
    const[text,setText] = useState('');
    const handleUpClick = ()=>{
        let newText = text.toUpperCase()
        setText(newText)
        props.showAlert('Converted to UpperCase!','success')
    }
    const handleloClick = ()=>{
        let newText = text.toLowerCase()
        setText(newText)
        props.showAlert('Converted to LowerCase!','success')
    }
    const handleClearClick = ()=>{
        let newText = ''
        setText(newText)
        props.showAlert('Text Cleared','success')
    }
    const handleOnChange = (e)=>{
        setText(e.target.value)
    }
    const handleCopy = ()=>{
        let text = document.getElementById('mybox');
        text.select();
        navigator.clipboard.writeText(text.value);
        props.showAlert('Text Copied','success')
    }
    const handleExtraSpaces = ()=>{
        let newText = text.split(/[ ]+/);
        setText(newText.join(' '));
        props.showAlert('Extra Spaces Removed','success')
    } 
  return (
    <>
        <div className='container'style={{color:props.mode==='dark'?'white':'black'}}>
            <h1>{props.heading}</h1>
            <div className="mb-3">
                <textarea className="form-control" value={text} style={{backgroundColor:props.mode==='dark'?'grey':'white',
                color:props.mode==='dark'?'white':'black'}} onChange = {handleOnChange} id="mybox" rows="8"></textarea>
            </div>
            <button className="btn btn-primary mx-1" onClick = {handleUpClick}>Convert to UpperCase</button>
            <button className="btn btn-primary mx-1" onClick = {handleloClick}>Convert to LowerCase</button>
            <button className="btn btn-primary mx-1" onClick = {handleClearClick}>Clear</button>
            <button className="btn btn-primary mx-1" onClick = {handleCopy}>Copy Text</button>
            <button className="btn btn-primary mx-1" onClick = {handleExtraSpaces}>Handle Extra Spaces</button>
        </div>
        <div className="container my-3"style={{color:props.mode==='dark'?'white':'black'}}>
            <h2>Your Text Summary</h2>
            <p>{text.split(" ").length}words and {text.length}characters</p>
            <p>{0.008*text.split(" ").length}Minutes to read</p>
            <h2>Preview </h2>
            <p>{text.length===0?'Enter some text to preview':text}</p>
        </div>
    </>
  )
}
