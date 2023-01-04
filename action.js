function changePage1() {
    var box = document.getElementById("discounted-slide");
    document.getElementById("discounted-track").style.transform ="translate3d(0,0,0)";
}
function changePage2() {

    var box = document.getElementById("discounted-slide");
    if(box.offsetWidth === 236) {
        document.getElementById("discounted-track").style.transform ="translate3d(-236px,0,0)";
    }
    if(box.offsetWidth === 231) {
        document.getElementById("discounted-track").style.transform="translate3d(-231px, 0, 0)";
    }
    if(box.offsetWidth ===240) {
        document.getElementById("discounted-track").style.transform ="translate3d(-240px,0,0)";
    }
    if(box.offsetWidth === 230) {
        document.getElementById("discounted-track").style.transform ="translate3d(-230px,0,0)";
    }
}
function changePage3() {
    var box = document.getElementById("discounted-slide");
    if(box.offsetWidth ===236) {
        document.getElementById("discounted-track").style.transform ="translate3d(-472px,0,0)";
    }
    if(box.offsetWidth ===231) {
        document.getElementById("discounted-track").style.transform ="translate3d(-462px,0,0)";
    }
    if(box.offsetWidth ===240) {
        document.getElementById("discounted-track").style.transform ="translate3d(-480px,0,0)";
    }
    if(box.offsetWidth ===230) {
        document.getElementById("discounted-track").style.transform ="translate3d(-460px,0,0)";
    }
}
function changePage4() {
    var box = document.getElementById("discounted-slide");
    if(box.offsetWidth ===236) {
        document.getElementById("discounted-track").style.transform ="translate3d(-708px,0,0)";
    }
    if(box.offsetWidth ===231) {
        document.getElementById("discounted-track").style.transform ="translate3d(-693px,0,0)";
    }
    if(box.offsetWidth ===240) {
        document.getElementById("discounted-track").style.transform ="translate3d(-720px,0,0)";
    }
    if(box.offsetWidth ===230) {
        document.getElementById("discounted-track").style.transform ="translate3d(-690px,0,0)";
    }
}
function changePage5() {
    var box = document.getElementById("discounted-slide");
    if(box.offsetWidth ===236) {
        document.getElementById("discounted-track").style.transform ="translate3d(-944px,0,0)";
    }
    if(box.offsetWidth ===231) {
        document.getElementById("discounted-track").style.transform ="translate3d(-924px,0,0)";
    }
    if(box.offsetWidth ===240) {
        document.getElementById("discounted-track").style.transform ="translate3d(-960px,0,0)";
    }
    if(box.offsetWidth ===230) {
        document.getElementById("discounted-track").style.transform ="translate3d(-920px,0,0)";
    }

}
function changePage6() {
    var box = document.getElementById("discounted-slide");
    if(box.offsetWidth ===236) {
        document.getElementById("discounted-track").style.transform ="translate3d(-1180px,0,0)";
    }
    if(box.offsetWidth ===231) {
        document.getElementById("discounted-track").style.transform ="translate3d(-1155px,0,0)";
    }
    if(box.offsetWidth ===240) {
        document.getElementById("discounted-track").style.transform ="translate3d(-1200px,0,0)";
    }
    if(box.offsetWidth ===230) {
        document.getElementById("discounted-track").style.transform ="translate3d(-1150px,0,0)";
    }
    
}
function changeBlog1() {
    document.getElementById("blog-slick-track").style.transform="translate3d(0,0,0)";
}
function changeBlog2() {
    var box = document.getElementById("blog-slick-slide");
    if(box.offsetWidth ===260) {
        document.getElementById("blog-slick-track").style.transform="translate3d(-260px,0,0)";
    }
    if(box.offsetWidth === 250) {
        document.getElementById("blog-slick-track").style.transform="translate3d(-250px,0,0)";
    }
}
function changeBlog3() {
    var box = document.getElementById("blog-slick-slide");
        document.getElementById("blog-slick-track").style.transform="translate3d(-520px,0,0)";
    
}

function prev() {
    i=0;
    document.getElementById("slider-track").style.transform="translate3d(0,0,0)";
}
var i = 0;
function next() {
    i++;
    var box = document.getElementById("slider-slide");
    if(box.offsetWidth === 300 && i%5== 0) {
        document.getElementById("slider-track").style.transform="translate3d(0,0,0)";
    }
    if(box.offsetWidth === 300 && i%5== 1) {
        document.getElementById("slider-track").style.transform="translate3d(-300px,0,0)";
    }
    if(box.offsetWidth === 300 && i%5== 2) {
        document.getElementById("slider-track").style.transform="translate3d(-600px,0,0)";
    }
    if(box.offsetWidth === 300 && i%5 ==3) {
        document.getElementById("slider-track").style.transform="translate3d(-900px,0,0)";
    }
    if(box.offsetWidth === 300 && i%5 === 4) {
        document.getElementById("slider-track").style.transform="translate3d(-1200px,0,0)";
    }
    if(box.offsetWidth === 500 && i%5==0) {
        document.getElementById("slider-track").style.transform="translate3d(0,0,0)";
    }
    if(box.offsetWidth === 500 && i%5== 1) {
        document.getElementById("slider-track").style.transform="translate3d(-500px,0,0)";
    }
    if(box.offsetWidth === 500 && i%5== 2) {
        document.getElementById("slider-track").style.transform="translate3d(-1000px,0,0)";
    }
    if(box.offsetWidth === 500 && i%5 ==3) {
        document.getElementById("slider-track").style.transform="translate3d(-1500px,0,0)";
    }
    if(box.offsetWidth === 500 && i%5 == 4) {
        document.getElementById("slider-track").style.transform="translate3d(-2000px,0,0)";
    }
}

var container = document.getElementById("form-container");
let user = document.getElementById("form-name").value;
function Registration() {
    var user = document.getElementById("form-name").value;
    var pass = document.getElementById("pass1").value;
    var mail = document.getElementById("form-mail").value;
    var reppass = document.getElementById("pass2").value;
    if(user.length == 0 || pass.length == 0 || mail.length == 0) {
        document.getElementById("error-p").innerHTML="* ყველა ველი უნდა შეავსოთ";
    }
    else if(pass === reppass) {
        document.getElementById("register-name").value = user;
        document.getElementById("register-pass").value = pass;   
        document.getElementById("error-p").style.color="green";
        document.getElementById("error-p").innerHTML="* თქვენ წარმატებით გაიარეთ რეგისტრაცია";

    }
    else {
        document.getElementById("error-p").innerHTML="* განმეორებითი პაროლი არ ემთხვევა";
    }
}
function registerForm() {
    location.href="registration.html";
}

function loginButton() {
    var username = document.getElementById("register-name").value;
    var password = document.getElementById("register-pass").value;
    if(username.length == 0 || password.length == 0) {
        document.getElementById("notregistered1").innerHTML="ჯერ გაიარეთ რეგისტრაცია";
    }
    else {
        location.href="index.html";
        alert("თქვენ ხართ სისტემაში შესული, როგორც  " + username);
        
        
    }
    
    
}



