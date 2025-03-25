import java.io.*;

public class FileReadWrite {
    public static void main(String[] args) throws IOException {
        FileWriter fw = new FileWriter("test.txt");
        fw.write("Hello, File Handling!");
        fw.close();

        FileReader fr = new FileReader("test.txt");
        int ch;
        while ((ch = fr.read()) != -1)
            System.out.print((char) ch);
        fr.close();
    }
}