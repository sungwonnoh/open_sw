const (변수이름)
let (변수이름)

const일 때는 변수 값 변경 불가, let은 밑에 줄로 값 재설정가능 - 코드의 의미파악이 쉬움
(옛날 버전)var - 원한다면 어디서든 변경가능
기본적으로 const사용, 필요 시 let쓰고 var은 쓰지말 것

<h4>event</h4> 
const title = document.querySelector(".hello:first-child h1");

function handleTitleClick(){
    console.log("title was clicked!");
}
title.addEventListener("click", handleTitleClick);

handleTitleClick()  <<실행버튼

<h4>id 사용</h4>
const title = document.querySelector("#hello");

const title = document.getElementById("hello");

//같은 내용이다=요소를 가져옴

<h4>form submission</h4>
input : 입력 폼
브라우저는 엔터를 누를 때 새로고침을 하고 form을 submit 하도록 되어있다.

이때 preventDefault() 는 브라우저의 기본 동작을 막아준다
