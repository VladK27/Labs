function array(){
    let arr = [5, 6, 7, 8];
    let mult = 1;
    for(let i = 0;i < arr.length;i++){
        mult*=arr[i];
    }
    alert(mult);
}
function obj(){
    let cities = new Object();
    cities = {
        'Минск' : 'Беларусь',
        'Москва' : 'Россия',
        'Киев' : 'Украина'
    }
    for(let city in cities){
        alert(city + " - это " + cities[city])
    }
}