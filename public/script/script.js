
const Pn_s = document.getElementsByClassName("pn-s")
const options = document.getElementById("open")
const popUp = document.getElementById("pop")
const body = document.querySelector("main")

for (const iterator of Pn_s) {
    iterator.addEventListener('click',(e) => {
        closePop();
    })
}


export function closePop() {
    options.style.rotate = "0deg"
    popUp.style.display = "none";
    body.style.filter = "blur(0)";
}
