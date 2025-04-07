Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
var s, clicks, min : integer; 
type
  Form1 = class(Form)
        procedure button1_Click(sender: Object; e: EventArgs);
    procedure timer1_Tick(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    label1: &Label;
    textBox1: TextBox;
    timer1: Timer;
    components: System.ComponentModel.IContainer;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation


procedure Form1.button1_Click(sender: Object; e: EventArgs);
 
begin
  s := s + 1; 
  clicks := clicks + 1;
  button1.Text := $'Клики: {s}';
  end;

procedure Form1.timer1_Tick(sender: Object; e: EventArgs);
begin
  
  textBox1.Text := $'Клики в секунду: {clicks}';
  min := clicks * 60;
  label1.Text := $'Клики в минуту: {min}';
  clicks := 0;
end;


end.
