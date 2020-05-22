var screenObj = {};
var ship = {};
var speed = 10;

screenObj.canvas = document.getElementById('myCanvas');
screenObj.context = screenObj.canvas.getContext('2d');
screenObj.width = screenObj.canvas.width;
screenObj.height = screenObj.canvas.height;

screenObj.start = function (){
    screenObj.context.clearRect(0, 0, screenObj.width, screenObj.height);
    screenObj.background = new Image();
    screenObj.background.src = 'space.jpeg';
    screenObj.background.onload = function (){
        screenObj.context.drawImage(screenObj.background, 0, 0);
    }
}

screenObj.clear = function (){
    screenObj.context.clearRect(0, 0, screenObj.width, screenObj.height);
    screenObj.context.drawImage(screenObj.background, 0, 0);
}

ship.start = function (){
    ship.image = new Image();
    ship.image.src = 'ship.png';
    ship.image.onload = function (){
        ship.positionx = (screenObj.width/2) - (ship.image.width/2);
        ship.positiony = screenObj.height - (ship.image.height + 20);
        screenObj.context.drawImage(ship.image, ship.positionx, ship.positiony);
    }
}

ship.refresh = function (){
    screenObj.clear();
    screenObj.context.drawImage(ship.image, ship.positionx, ship.positiony);
}

ship.moveRight = function (){
    ship.positionx = ship.positionx + speed;
    ship.refresh();
}

ship.moveLeft = function (){
    ship.positionx = ship.positionx - speed;
    ship.refresh();
}

ship.moveUp = function (){
    ship.positiony = ship.positiony - speed;
    ship.refresh();
}

ship.moveDown = function (){
    ship.positiony = ship.positiony + speed;
    ship.refresh();
}

function keyPress(key){
    if (key.keyCode == 39){
        ship.moveRight();
    } 
    if (key.keyCode == 37){
        ship.moveLeft();
    }
    if (key.keyCode == 40){
        ship.moveDown();
    }
    if (key.keyCode == 38){
        ship.moveUp();
    }
}

window.addEventListener('keydown', keyPress, false);