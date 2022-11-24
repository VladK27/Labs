function start(){
    let row = 0;
    let table = document.querySelector('table'); 
    for(let cell = 0;cell < 5;cell++){
        table.rows[row].cells[cell].style.background = 'yellow';
        row++;
    }
}