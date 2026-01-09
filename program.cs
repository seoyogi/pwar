using OpenTK.Windowing.Desktop;
using OpenTK.Graphics.OpenGL4;
using OpenTK.Mathematics;

class Game : GameWindow {
    public Game():base(GameWindowSettings.Default, NativeWindowSettings.Default){}
    protected override void OnRenderFrame(OpenTK.Windowing.Common.FrameEventArgs e){
        GL.Clear(ClearBufferMask.ColorBufferBit | ClearBufferMask.DepthBufferBit);
        SwapBuffers();
    }
    static void Main(){ new Game().Run(); }
}
