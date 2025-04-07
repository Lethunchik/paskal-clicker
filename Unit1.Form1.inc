procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        self.button1 := new System.Windows.Forms.Button();
        self.label1 := new System.Windows.Forms.Label();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.SuspendLayout();
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(57, 84);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(165, 85);
        self.button1.TabIndex := 0;
        self.button1.Text := 'Клики: 0';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // label1
        // 
        self.label1.Location := new System.Drawing.Point(74, 228);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(147, 24);
        self.label1.TabIndex := 1;
        self.label1.Text := 'label1';
        // 
        // textBox1
        // 
        self.textBox1.Location := new System.Drawing.Point(65, 184);
        self.textBox1.Name := 'textBox1';
        self.textBox1.Size := new System.Drawing.Size(155, 22);
        self.textBox1.TabIndex := 2;
        // 
        // timer1
        // 
        self.timer1.Enabled := true;
        self.timer1.Interval := 1000;
        self.timer1.Tick += timer1_Tick;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(282, 253);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.button1);
        self.Name := 'Form1';
        self.Text := 'Form1';
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
