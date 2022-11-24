function start(){
    boat.style.animation = 'tranformBoat 0.5s linear 1 forwards';
    mast.style.animation = 'rotateMast 0.5s linear 1 forwards';
    setTimeout(() => {
    sail1.style.display = 'block';
    sail2.style.display = 'block';
    sail1.style.animation = 'transformSail1 0.5s linear 1 forwards';
    sail2.style.animation = 'transformSail2 0.5s linear 1 forwards';
      }, 600);

    setTimeout(() => {
        boat.style.animation = 'boatGo 2s linear 1 forwards';
    }, 1000);
}
