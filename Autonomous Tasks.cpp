void DriveNearObject(Ultrasonic *us,DriveBase *drive,dobule stopDistance){
    if(us.dist()>10)
        drive.drive(1,0);
    else
        drive.drive(0,0);
}
void DriveDistance(Encoder *enc, DriveBase *drive,double setpoint, double kP){
    drive.drive((setpoint-enc.get())*kP,0);
}