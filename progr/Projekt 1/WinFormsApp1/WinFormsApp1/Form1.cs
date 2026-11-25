namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label4_Click(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Dane pracownika: " + name.Text + " " + surname.Text + " " + position.Text + " Hasło: " + password);
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }
        string password = "";
        private void btnGenerate_Click(object sender, EventArgs e)
        {
            string specialCharSet = "!@#$%^&*()_+-=";
            password = "";
            int charNum = int.Parse(charCount.Text);
            Random rnd = new Random();
            for (int i = 0; i < charNum; i++)
            {
                if (i == 0 & smallChar.Checked)
                {
                    password += (char)rnd.Next(65, 91);
                }
                else if (i == 1 & numbers.Checked)
                {
                    password += (char)rnd.Next(48, 58);
                }
                else if (i == 2 & specialChar.Checked)
                {
                    password += specialCharSet[rnd.Next(0, 14)];
                }
                else
                {
                    password += (char)rnd.Next(97, 123);
                }
            }
            MessageBox.Show(password);
        }
    }
}
