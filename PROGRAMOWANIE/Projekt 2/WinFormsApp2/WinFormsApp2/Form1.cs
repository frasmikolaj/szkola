namespace WinFormsApp2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            ReadResults();
        }

        //Funkcja ktora odczytuje wyniki z pliku
        private void ReadResults()
        {
            //czy plik istnieje
            if (File.Exists("wyniki.txt"))
            {
                //linie z pliku
                string[] content = File.ReadAllLines("wyniki.txt");
                //czysci pole z wynikami
                Wynik.Text = "";
                for (int i = 0; i < content.Length - 1; i++)
                {
                    //dodaje linie do pola wynik
                    Wynik.Text += content[i] + "\n";
                }
            }
            else
            {
                //jezeli plik nie istnieje to pisze to
                Wynik.Text = "Twoje wyniki";
            }
        }

        //funkcja po kliknieciu przycisku zapisz
        private void btnZapisz_Click(object sender, EventArgs e)
        {
            //zmienne
            char plec = 'X';
            if (PlecK.Checked) plec = 'K';
            else if (PlecM.Checked) plec = 'M';
            string nick = Nick.Text;
            int wiek = (int)Wiek.Value;
            bool dysfunkcje = Dysfunkcje.Checked;
            //otwiera sie plik do dopisywania danych

            using (StreamWriter sw = File.AppendText("wyniki.txt"))
            {
                //wypisanie tego wszystkiego
                if (plec == 'X') sw.WriteLine("Plec: " + "Nie podano");
                else sw.WriteLine("Plec: " + plec);
                sw.WriteLine("Nick: " + nick);
                sw.WriteLine("Wiek: " + wiek);
                if (dysfunkcje) sw.WriteLine("Dysfunkcje: Tak");
                else sw.WriteLine("Dysfunkcje: Nie");
            }
            //odczytuje sie zeby sie dane pojawily
            ReadResults();
        }
    }
}
