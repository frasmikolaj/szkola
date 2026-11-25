using static System.Runtime.InteropServices.JavaScript.JSType;

namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            //dodanie 2 zdjec, polubienia na 0
            zdjecia.Add("Zdjecia\\zdjecie1.jpg");
            zdjecia.Add("Zdjecia\\zdjecie2.jpg");
            polubienia.Add(0);
            polubienia.Add(0);
            pictureBox1.Image = Image.FromFile(zdjecia[0]);
            labelPolubienia.Text = "Polubienia " + polubienia[0];
            pictureBox1.SizeMode = PictureBoxSizeMode.Zoom;
        }
        //lsita zdjec, lsita polubien, numer zdjecia
        List<string> zdjecia = new List<string>();
        int numer = 0;
        List<int> polubienia = new List<int>();
        private void button3_Click(object sender, EventArgs e)
        {
            OpenFileDialog okno = new OpenFileDialog();
            okno.Filter = "Pliki JPG|*.jpg";

            //czy wybral pliki
            if (okno.ShowDialog() == DialogResult.OK)
            {
                foreach (string zdjecie in okno.FileNames)
                {
                    //sciezka zdjec do listy i liczba polubien
                    zdjecia.Add(zdjecie);
                    polubienia.Add(0);
                }
                numer = zdjecia.Count - 1;
                pictureBox1.SizeMode = PictureBoxSizeMode.StretchImage;
                pictureBox1.Image = Image.FromFile(zdjecia[numer]);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (zdjecia.Count == 0)
            {
                return;
            }
            numer--;
            if (numer < 0)
            {
                numer = zdjecia.Count - 1;
            }
            pictureBox1.Image = Image.FromFile(zdjecia[numer]);
            labelPolubienia.Text = "Polubienia: " + polubienia[numer];
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (zdjecia.Count == 0)
            {
                return;
            }
            numer++;
            if (numer >= zdjecia.Count)
            {
                numer = 0;
            }
            pictureBox1.Image = Image.FromFile(zdjecia[numer]);
            labelPolubienia.Text = "Polubienia: " + polubienia[numer];
        }

        private void labelPolubienia_Click(object sender, EventArgs e)
        {
            labelPolubienia.Text = "Polubienia: " + polubienia[numer];
        }

        private void Polub_Click(object sender, EventArgs e)
        {
            if (zdjecia.Count == 0)
            {
                return;
            }
            polubienia[numer]++;
            labelPolubienia.Text = "Polubienia: " + polubienia[numer];
        }
    }


}
