void DriveNearObject(Ultrasonic *us,DriveBase *drive,dobule stopDistance){
    if(us.dist<10)
        drive.drive(1,0);
}
void DriveDistance(Encoder *enc, DriveBase *drive,double dist, double kP){

}