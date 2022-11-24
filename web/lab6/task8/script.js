let value = 0;
function increase(){
    if(value < 20)value+=1;
    else{
        alert('Максимальное значение');
        return;
    }
    progress.setAttribute('value', value);
    document.querySelector('span').innerHTML = `${value*5}%`;
    
}