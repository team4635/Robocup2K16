#define num 255;
/* 
 *
 *
 *
 *
 */

vexMotor vMotorLeft;
vexMotor vMotorRight;
vexMotor vMotorFront;
vexMotor vMotorBack;
bool bMotorsRotated;
int x = 0;
int y = 0;
float angle = 0;

void motorsSetup()
{
  vMotorLeft.attach(leftMotor);
  vMotorRight.attach(rightMotor);
  vMotorFront.attach(frontMotor);
  vMotorBack.attach(backMotor);

  bMotorsRotated = true;
}

void MovernosHacia(int Posibilidad)
{
  switch(Posibilidad){
  case 1: x = 0;
          y = num;
    break;
  case 2: x = num;
          y = 0;
    break;
  case 3: x = 0;
          y = -num;
    break;
  case 4: x = -num;
          y = 0;
    break;
  default: x = 0;
           y = 0; 
    break;
}
    long lCurrentDistance = getDistance();
    while(lCurrentDistance!=(lCurrentDistance-30))
    {
    Angulo //Actualizar el angulo para corregir la trayectoria
    vMotorLeft.write(-x+y-angle*factor);
    vMotorRight.write(x-y-angle*factor);
    vMotorFront.write(-x-y-angle*factor);
    vMotorBack.write(x+y-angle*factor);     
    }
}
