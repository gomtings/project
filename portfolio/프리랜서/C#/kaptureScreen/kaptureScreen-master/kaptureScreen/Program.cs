using System;
using System.Collections.Generic;
using System.Text;
using System.Runtime.InteropServices;
using System.Drawing;
using System.Drawing.Imaging;
using System.Diagnostics;
namespace kaptureScreen
{
    class Program
    {
        static void Main(string[] args)
        {
            Stopwatch swh = new Stopwatch();
            ScreenCapture sc = new ScreenCapture();
            int time_m = 0;
            while (true)
            {
                swh.Start(); //  �ð� ī��Ʈ 
                try
                {
                    time_m += Int32.Parse(swh.ElapsedMilliseconds.ToString());
                    // capture entire screen, and save it to a file
                    if (time_m == 60000) // 1�� �� ĸó 60000 ==1�� �Դϴ�. 
                    {
                        string sFileName = string.Format("screenshot-{0:hh-mm-ss_dd-MM-yyyy}.jpg", DateTime.Now);
                        sc.CaptureScreenToFile(@"D:\screenshots\" + sFileName, ImageFormat.Jpeg);
                        swh.Stop(); time_m = 0;
                    }
                }
                catch (Exception e)
                {

                }
            }
        }
    }
}
