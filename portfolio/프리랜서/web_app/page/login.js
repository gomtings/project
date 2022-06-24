document.querySelector("#btn_signin").addEventListener("click", () => {
    const id = "asdf";
    const password = "1234";
 
    if(id == document.querySelector("#id").value) {
        if(password == document.querySelector("#password").value) {
            alert("환영합니다!");
            //document.write("환영합니다!");

            location.href ='text_view.html';
        }
        else {
            alert("아이디 또는 비밀번호가 일치하지 않습니다.");
            //document.write("아이디 또는 비밀번호가 일치하지 않습니다.");
        }
    }
    else {
        alert("아이디 또는 비밀번호가 일치하지 않습니다.");
        //document.wrtie("아이디 또는 비밀번호가 일치하지 않습니다.");
    }

});

document.querySelector("#btn_signup").addEventListener("click", () => {
    location.href ='signup.html';
 

});

