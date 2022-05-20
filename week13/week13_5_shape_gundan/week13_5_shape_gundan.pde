PShape gundam;
void setup(){
    size(500,500,P3D);
    gundam=loadShape("Gundam.obj");
}
void draw(){
    background(#F8FAC2);
    translate(250,400,0);
    scale(10,-10,10);
    rotateY(radians(frameCount));
    shape(gundam);
}
