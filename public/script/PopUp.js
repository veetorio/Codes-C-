const options = document.getElementById("open")
const popUp = document.getElementById("pop")
const body = document.querySelector("main")



let isOpen = true;
function pop() {
    const buttonOpen = document
        .getElementById("open")
        .addEventListener("click", () => {

            if (isOpen) {
                openPop();
                isOpen = false;
            } else {
                closePop();
                isOpen = true;
            }
        })

    const buttonClose = document
        .getElementById("close")
        .addEventListener("click", () => {
            closePop()
        });
}

export function openPop() {
    options.style.rotate = "45deg";
    popUp.style.display = "block";
    body.style.filter = "blur(5px)";
}

export function closePop() {
    options.style.rotate = "0deg"
    popUp.style.display = "none";
    body.style.filter = "blur(0)";
}
pop()


