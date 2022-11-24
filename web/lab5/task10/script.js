function money(money){
    let result = parseInt(money);
    result*=1.15;
    alert(`Премия 15% итого: ${result}`);
    result*=0.9;
    alert(`Налог 10% итого:${result}`);
    result-=90;
    alert(`Траты в магазине -90, итого:${result}`);
    result*=0.5;
    alert(`Половину второй половинке, итого: ${result}`);

}