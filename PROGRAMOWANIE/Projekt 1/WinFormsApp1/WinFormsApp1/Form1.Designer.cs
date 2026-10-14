namespace WinFormsApp1
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            groupBox1 = new GroupBox();
            label1 = new Label();
            label2 = new Label();
            label3 = new Label();
            name = new TextBox();
            groupBox2 = new GroupBox();
            charCount = new TextBox();
            surname = new TextBox();
            label4 = new Label();
            btnGenerate = new Button();
            btnConfirm = new Button();
            smallChar = new CheckBox();
            numbers = new CheckBox();
            specialChar = new CheckBox();
            position = new ComboBox();
            groupBox1.SuspendLayout();
            groupBox2.SuspendLayout();
            SuspendLayout();
            // 
            // groupBox1
            // 
            groupBox1.Controls.Add(position);
            groupBox1.Controls.Add(label1);
            groupBox1.Controls.Add(label2);
            groupBox1.Controls.Add(label3);
            groupBox1.Controls.Add(name);
            groupBox1.Controls.Add(surname);
            groupBox1.Location = new Point(30, 34);
            groupBox1.Name = "groupBox1";
            groupBox1.Size = new Size(337, 231);
            groupBox1.TabIndex = 0;
            groupBox1.TabStop = false;
            groupBox1.Text = "Dane pracownika";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(30, 46);
            label1.Name = "label1";
            label1.Size = new Size(30, 15);
            label1.TabIndex = 6;
            label1.Text = "Imię";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(30, 94);
            label2.Name = "label2";
            label2.Size = new Size(57, 15);
            label2.TabIndex = 7;
            label2.Text = "Nazwisko";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(30, 146);
            label3.Name = "label3";
            label3.Size = new Size(67, 15);
            label3.TabIndex = 8;
            label3.Text = "Stanowisko";
            label3.Click += label3_Click;
            // 
            // name
            // 
            name.Location = new Point(171, 43);
            name.Name = "name";
            name.Size = new Size(121, 23);
            name.TabIndex = 3;
            name.TextChanged += textBox2_TextChanged;
            // 
            // groupBox2
            // 
            groupBox2.Controls.Add(specialChar);
            groupBox2.Controls.Add(numbers);
            groupBox2.Controls.Add(smallChar);
            groupBox2.Controls.Add(label4);
            groupBox2.Controls.Add(btnGenerate);
            groupBox2.Controls.Add(charCount);
            groupBox2.Location = new Point(442, 34);
            groupBox2.Name = "groupBox2";
            groupBox2.Size = new Size(312, 231);
            groupBox2.TabIndex = 1;
            groupBox2.TabStop = false;
            groupBox2.Text = "Generowanie hasła";
            // 
            // charCount
            // 
            charCount.Location = new Point(163, 43);
            charCount.Name = "charCount";
            charCount.Size = new Size(118, 23);
            charCount.TabIndex = 2;
            // 
            // surname
            // 
            surname.Location = new Point(171, 91);
            surname.Name = "surname";
            surname.Size = new Size(121, 23);
            surname.TabIndex = 4;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(36, 46);
            label4.Name = "label4";
            label4.Size = new Size(67, 15);
            label4.TabIndex = 9;
            label4.Text = "Ile znaków?";
            label4.Click += label4_Click;
            // 
            // btnGenerate
            // 
            btnGenerate.BackColor = Color.SteelBlue;
            btnGenerate.ForeColor = Color.White;
            btnGenerate.Location = new Point(108, 187);
            btnGenerate.Name = "btnGenerate";
            btnGenerate.Size = new Size(94, 23);
            btnGenerate.TabIndex = 10;
            btnGenerate.Text = "Generuj hasło";
            btnGenerate.UseVisualStyleBackColor = false;
            btnGenerate.Click += btnGenerate_Click;
            // 
            // btnConfirm
            // 
            btnConfirm.BackColor = Color.SteelBlue;
            btnConfirm.ForeColor = Color.White;
            btnConfirm.Location = new Point(293, 305);
            btnConfirm.Name = "btnConfirm";
            btnConfirm.Size = new Size(239, 23);
            btnConfirm.TabIndex = 11;
            btnConfirm.Text = "Zatwierdź";
            btnConfirm.UseVisualStyleBackColor = false;
            btnConfirm.Click += button2_Click;
            // 
            // smallChar
            // 
            smallChar.AutoSize = true;
            smallChar.Checked = true;
            smallChar.CheckState = CheckState.Checked;
            smallChar.Location = new Point(36, 81);
            smallChar.Name = "smallChar";
            smallChar.Size = new Size(126, 19);
            smallChar.TabIndex = 11;
            smallChar.Text = "Małe i wielkie litery";
            smallChar.UseVisualStyleBackColor = true;
            smallChar.CheckedChanged += checkBox1_CheckedChanged;
            // 
            // numbers
            // 
            numbers.AutoSize = true;
            numbers.Location = new Point(36, 115);
            numbers.Name = "numbers";
            numbers.Size = new Size(54, 19);
            numbers.TabIndex = 12;
            numbers.Text = "Cyfry";
            numbers.UseVisualStyleBackColor = true;
            numbers.CheckedChanged += checkBox2_CheckedChanged;
            // 
            // specialChar
            // 
            specialChar.AutoSize = true;
            specialChar.Location = new Point(36, 151);
            specialChar.Name = "specialChar";
            specialChar.Size = new Size(107, 19);
            specialChar.TabIndex = 13;
            specialChar.Text = "Znaki specjalne";
            specialChar.UseVisualStyleBackColor = true;
            // 
            // position
            // 
            position.FormattingEnabled = true;
            position.Items.AddRange(new object[] { "Kierwonik", "Starszy programista", "Młodszy programista", "Tester" });
            position.Location = new Point(171, 143);
            position.Name = "position";
            position.Size = new Size(121, 23);
            position.TabIndex = 9;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.LightSteelBlue;
            ClientSize = new Size(812, 358);
            Controls.Add(btnConfirm);
            Controls.Add(groupBox2);
            Controls.Add(groupBox1);
            Name = "Form1";
            Text = "Dodaj pracownika";
            groupBox1.ResumeLayout(false);
            groupBox1.PerformLayout();
            groupBox2.ResumeLayout(false);
            groupBox2.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private GroupBox groupBox1;
        private GroupBox groupBox2;
        private TextBox charCount;
        private TextBox name;
        private TextBox surname;
        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Button btnGenerate;
        private Button btnConfirm;
        private CheckBox specialChar;
        private CheckBox numbers;
        private CheckBox smallChar;
        private ComboBox position;
    }
}
