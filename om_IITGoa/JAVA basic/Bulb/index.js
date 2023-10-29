const bulb=document.querySelector(".bulb");
document.querySelector("button").addEventListener("click",function(){

    if(bulb.innerHTML==="ON"){
        bulb.classList.toggle("green");
        bulb.innerHTML="OFF";
    } else{
        bulb.classList.toggle("green");
        bulb.innerHTML="ON";
    }
})