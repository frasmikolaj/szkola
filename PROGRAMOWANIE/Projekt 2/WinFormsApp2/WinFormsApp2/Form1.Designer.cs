namespace WinFormsApp2
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
            gbPlec = new GroupBox();
            label1 = new Label();
            PlecM = new RadioButton();
            PlecK = new RadioButton();
            PlecX = new RadioButton();
            label2 = new Label();
            label3 = new Label();
            Nick = new TextBox();
            Wiek = new NumericUpDown();
            Dysfunkcje = new CheckBox();
            btnZapisz = new Button();
            Wynik = new Label();
            gbWynik = new GroupBox();
            gbPlec.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)Wiek).BeginInit();
            gbWynik.SuspendLayout();
            SuspendLayout();
            // 
            // gbPlec
            // 
            gbPlec.Controls.Add(Dysfunkcje);
            gbPlec.Controls.Add(label1);
            gbPlec.Controls.Add(label2);
            gbPlec.Controls.Add(label3);
            gbPlec.Controls.Add(PlecM);
            gbPlec.Controls.Add(Nick);
            gbPlec.Controls.Add(PlecK);
            gbPlec.Controls.Add(Wiek);
            gbPlec.Controls.Add(PlecX);
            gbPlec.Location = new Point(12, 12);
            gbPlec.Name = "gbPlec";
            gbPlec.Size = new Size(364, 243);
            gbPlec.TabIndex = 0;
            gbPlec.TabStop = false;
            gbPlec.Text = "Płeć";
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(31, 28);
            label1.Name = "label1";
            label1.Size = new Size(74, 15);
            label1.TabIndex = 1;
            label1.Text = "Wybierz płeć";
            // 
            // PlecM
            // 
            PlecM.AutoSize = true;
            PlecM.Location = new Point(31, 46);
            PlecM.Name = "PlecM";
            PlecM.Size = new Size(82, 19);
            PlecM.TabIndex = 4;
            PlecM.TabStop = true;
            PlecM.Text = "Mężczyzna";
            PlecM.UseVisualStyleBackColor = true;
            // 
            // PlecK
            // 
            PlecK.AutoSize = true;
            PlecK.Location = new Point(31, 71);
            PlecK.Name = "PlecK";
            PlecK.Size = new Size(65, 19);
            PlecK.TabIndex = 5;
            PlecK.TabStop = true;
            PlecK.Text = "Kobieta";
            PlecK.UseVisualStyleBackColor = true;
            // 
            // PlecX
            // 
            PlecX.AutoSize = true;
            PlecX.Location = new Point(31, 96);
            PlecX.Name = "PlecX";
            PlecX.Size = new Size(122, 19);
            PlecX.TabIndex = 6;
            PlecX.TabStop = true;
            PlecX.Text = "Nie chce podawać";
            PlecX.UseVisualStyleBackColor = true;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(31, 133);
            label2.Name = "label2";
            label2.Size = new Size(42, 15);
            label2.TabIndex = 2;
            label2.Text = "Nazwa";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(31, 164);
            label3.Name = "label3";
            label3.Size = new Size(33, 15);
            label3.TabIndex = 3;
            label3.Text = "Wiek";
            // 
            // Nick
            // 
            Nick.Location = new Point(85, 130);
            Nick.Name = "Nick";
            Nick.Size = new Size(127, 23);
            Nick.TabIndex = 7;
            // 
            // Wiek
            // 
            Wiek.Location = new Point(85, 162);
            Wiek.Name = "Wiek";
            Wiek.Size = new Size(127, 23);
            Wiek.TabIndex = 8;
            // 
            // Dysfunkcje
            // 
            Dysfunkcje.AutoSize = true;
            Dysfunkcje.Location = new Point(31, 191);
            Dysfunkcje.Name = "Dysfunkcje";
            Dysfunkcje.Size = new Size(84, 19);
            Dysfunkcje.TabIndex = 9;
            Dysfunkcje.Text = "Dysfunkcje";
            Dysfunkcje.UseVisualStyleBackColor = true;
            // 
            // btnZapisz
            // 
            btnZapisz.BackColor = Color.SteelBlue;
            btnZapisz.ForeColor = Color.White;
            btnZapisz.Location = new Point(88, 282);
            btnZapisz.Name = "btnZapisz";
            btnZapisz.Size = new Size(205, 31);
            btnZapisz.TabIndex = 10;
            btnZapisz.Text = "Zapisz";
            btnZapisz.UseVisualStyleBackColor = false;
            btnZapisz.Click += btnZapisz_Click;
            // 
            // Wynik
            // 
            Wynik.AutoSize = true;
            Wynik.Location = new Point(6, 28);
            Wynik.Name = "Wynik";
            Wynik.Size = new Size(75, 15);
            Wynik.TabIndex = 12;
            Wynik.Text = "Twoje wyniki";
            // 
            // gbWynik
            // 
            gbWynik.Controls.Add(Wynik);
            gbWynik.Location = new Point(475, 12);
            gbWynik.Name = "gbWynik";
            gbWynik.Size = new Size(313, 381);
            gbWynik.TabIndex = 15;
            gbWynik.TabStop = false;
            gbWynik.Text = "Wynik";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(7F, 15F);
            AutoScaleMode = AutoScaleMode.Font;
            BackColor = Color.LightSteelBlue;
            ClientSize = new Size(800, 450);
            Controls.Add(gbWynik);
            Controls.Add(btnZapisz);
            Controls.Add(gbPlec);
            Name = "Form1";
            Text = "Form1";
            gbPlec.ResumeLayout(false);
            gbPlec.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)Wiek).EndInit();
            gbWynik.ResumeLayout(false);
            gbWynik.PerformLayout();
            ResumeLayout(false);
        }

        #endregion

        private GroupBox gbPlec;
        private Label label1;
        private Label label2;
        private Label label3;
        private RadioButton PlecM;
        private RadioButton PlecK;
        private RadioButton PlecX;
        private TextBox Nick;
        private NumericUpDown Wiek;
        private CheckBox Dysfunkcje;
        private Button btnZapisz;
        private Label Wynik;
        private GroupBox gbWynik;
    }
}
