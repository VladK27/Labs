function myname(){
    let name = "Vlad";
    for(let i = 0; i < name.length;i++){
        alert(name[i]);
    }
}

function num(){
    let num = "12345";
    let summ = 0;
    let mult = 1;
    for(let i = 0;i < num.length;i++){
        summ+=parseInt(num[i]);
        mult*=num[i];
    }
    alert("num = " + num);
    alert("summ = " + summ + " multiplication = " + String(mult));
}