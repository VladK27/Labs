function time(){
    let time;
    time = prompt("Enter time");
    if (time > 0 && time <= 15) alert("1 четверть");
    if (time > 15 && time <= 30) alert("2 четверть");
    if (time > 30 && time <= 45) alert("3 четверть");
    if (time > 45 && time <= 60) alert("4 четверть");
}
function week(){
    let week;
    week = prompt("ru or by?");
    switch(week){
        case "ru":{
            week = ["Понедельник","Вторник","Среда", "Четверг","Пятница", "Суббота", "Воскресенье"];
            alert(week);
            break;
        }
        case "by":{
            week = ["Панядзелак", "Ауторак", "Серада", "Чацверг", "Пятнiца", "Суббота", "Нядзеля"];
            alert(week);
            break;
        }
        default: alert("Wrong value");
    }
    
}