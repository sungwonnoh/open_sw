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
