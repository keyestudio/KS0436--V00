int relay = 3; // relay turn-on trigger signal - active high;
void setup ()
{
pinMode (relay, OUTPUT); //define port attribute for the output;
}
void loop ()
{
digitalWrite (relay, HIGH); // relay conducted;
delay (1000);
digitalWrite (relay, LOW); // relay switch;
delay (1000);
}
