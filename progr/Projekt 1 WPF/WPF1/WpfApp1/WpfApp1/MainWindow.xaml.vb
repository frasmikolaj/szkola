
Class MainWindow

    Private count As Integer = 0
    Public Sub New()
        InitializeComponent()
    End Sub
    Private Sub Increment(sender As Object, e As RoutedEventArgs)
        count += 1
        CounterBlock.Text = count.ToString()
    End Sub

    Private Sub Decrement(sender As Object, e As RoutedEventArgs)
        count -= 1
        CounterBlock.Text = count.ToString()
    End Sub

End Class
