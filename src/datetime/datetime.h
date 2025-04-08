class Time
{
public:
  Time();
  Time(int seconds);
  Time(int hour, int minute, int second);
  void add_seconds(int seconds);
  int get_hour();
  int get_minute();
  int get_second();

private:
  int to_seconds();
  int hour;
  int minute;
  int second;
};