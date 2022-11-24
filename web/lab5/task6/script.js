function sqrt(number){
    alert(number + "^2 = " + number**2);
    return number**2;
}
function summ(num1, num2){
    if(num1 != null && num2 != null){
    alert(num1 + ' + ' + num2 + ' = ' + (parseInt(num1) + parseInt(num2)));
    return (num1+num2);}
    else alert('Вы не ввели все числа');
}
function expr(num1, num2, num3){
    if(num1 != null && num2 != null && num3 != null){
        alert('(' + num1 + ' - ' + num2 + ')' + ' / ' + num3 + ' = ' + ((num1 - num2)/num3));
        return ((num1 - num2)/num3);
    }
    else alert("Вы не ввели все числа");
}
function weekday(day){
    let days = new Object();
    days = {
        1 : "Понедельник",
        2 : "Вторник",
        3 : "Среда",
        4 : "Четверг",
        5 : "Пятница",
        6 : "Суббота",
        7 : "Воскресенье",
    }
    if(day != null){
        if(day != null && day > 0 && day < 8)alert(day + 'день недели - это ' + days[day]);
        else alert('Введите число от 1 до 7')
    }
    else alert("Вы не ввели число")
    
}