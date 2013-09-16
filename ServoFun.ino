int ServoFun(int status){
  if (status == 1){
    myservo.writeMicroseconds(1500);
  }
  if (status == 2){
    myservo.writeMicroseconds(600);
  }
}

