<!DOCTYPE html>
<html lang="ja">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>リマインダーPWA</title>

<style>
html, body {
  margin: 0;
  padding: 0;
  width: 100%;
  height: 100%;
  background: #0f172a;
  color: white;
  font-family: sans-serif;
}

#app {
  display: flex;
  flex-direction: column;
  justify-content: center;
  align-items: center;
  height: 100%;
}

input, button {
  font-size: 1.5rem;
  padding: 12px;
  margin: 10px;
  border-radius: 10px;
  border: none;
}

button {
  background: #38bdf8;
  color: black;
}
</style>
</head>

<body>
<div id="app">
  <h1>⏰ リマインダー</h1>
  <input type="time" id="time">
  <button onclick="setReminder()">セット</button>
</div>

<script>
Notification.requestPermission();

function setReminder() {
  const time = document.getElementById("time").value;
  if (!time) return;

  const [h, m] = time.split(":").map(Number);
  const now = new Date();
  const target = new Date();
  target.setHours(h, m, 0, 0);

  const diff = target - now;
  if (diff <= 0) {
    alert("未来の時間を選んで");
    return;
  }

  setTimeout(() => {
    new Notification("⏰ リマインダー", {
      body: "時間になったよ"
    });

    const audio = new Audio(
      "data:audio/wav;base64,UklGRiQAAABXQVZFZm10IBAAAAABAAEAESsAACJWAAACABAAZGF0YQAAAAA="
    );
    audio.play();
  }, diff);
}
</script>
</body>
</html>
