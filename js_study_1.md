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


<h4>백틱을 사용하는 이유</h4>
자바스크립트엔 별도의 자료형이 없고 텍스트 형식의 데이터는 문자열 형태로 저장된다.
문자열은 작은따옴표나 큰따옴표, 백틱을 사용하여 나타낸다.
백틱은 작은 따옴표와 달리 새로운 백틱 기호 등장전까지 전체를 적용되는 범위로 간주한다. 작은 따옴표는 코드의 동일한 줄까지만 적용되지만, 백틱은 줄구분과 관련없이 적용된다. 이러한 특성으로 백틱을 사용한 문자열에서는 별도의 코드를 입력하지 않아도 자체적으로 줄바꿈이 가능하다.

-> `{변수}` 나 `링크` 방식으로 사용됨



css사용 vs js에서 class 사용
