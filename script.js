let navlinks = document.querySelectorAll(".resLink"); // Select all navLinks
let navbtn = document.querySelector(".hamburger");
let navArea = document.querySelector("header");

let body = document.querySelector("body")

// Add event listener to all navLinks

navbtn.addEventListener("click", () => {
  if (navArea.style.height === "70px" || navArea.style.height === "") {
    navArea.style.height = "300px"; // Expand the header
  } else {
    navArea.style.height = "70px"; // Collapse the header
}
});


navlinks.forEach((navLink)=>{
    navLink.addEventListener("click", ()=>{
        if(navArea.style.height === "300px"){
          navArea.style.height = "70px";
        }
    })
})