void setup()
{
  size(400, 200);
  fill(255, 0, 0);
  textSize(40);
}
float shift=0, v=10;
void draw()
{
  background(57, 255, 127);
  float start=radians(90+shift);
  float stop=radians(180+shift);
  arc(100, 100, 180, 180, start, stop);
  if(v>0.0001)
  {
    shift+=v;
    v=v*0.99;
  }
  text(shift, 200, 100);
  text(v, 200, 150);
}
