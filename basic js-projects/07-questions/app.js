//using selectors inside the element
const questions = document.querySelectorAll(".question");

questions.forEach(function(ques){
    const btn = ques.querySelector(".question-btn");
    btn.addEventListener("click", function(){
        questions.forEach(function(item){
            if(item!==ques){
                item.classList.remove("show-text");
            }
        });
        ques.classList.toggle("show-text");
    });
});





// traversing the dom

// const btns = document.querySelectorAll(".question-btn");

// btns.forEach(function(btn){
//     btn.addEventListener("click", function(e){
//         const question = e.currentTarget.parentElement.parentElement;
//         question.classList.toggle("show-text");
//     });
// });
