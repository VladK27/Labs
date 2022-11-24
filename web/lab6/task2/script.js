function func(){
    let prs = document.querySelectorAll('.pr');
    for(let i = 0; i < prs.length;i++) prs[i].innerHTML = i+1;
}