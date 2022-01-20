class IntakeSubsystem{
    double speed;
    double time;
    IntakeSubsystem(){
        speed = time*time;
    }
    void Run(double percent)
    {
        speed = time*time*percent;
    }
};