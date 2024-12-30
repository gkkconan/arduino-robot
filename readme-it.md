## Arduino Robot
Questo progetto è un piccolo robot costruito costruito per scopi didattici e con l'intento di avvicinare i ragazzi alla robotica, un campo tanto affascinante quanto complesso.
Questo robot riesce a combinare l'arte della stampa 3D e il fascino dei sistemi embedded.

Esso è composto da una struttura in PLA, ideale per leggerezza e soprattutto è un materiale bio-based e riciclabile per il 98.5%. Al suo interno è dotato del microcontrollore Arduino Nano, montato su una shield d'espansione per dargli la possibilità di collegare più servo motori e sensori.

Questo robot è in grado di muoversi, alzare le braccia, riprodurre suoni e canzoncine, evitare gli ostacoli e molte altre funzionalità.

Esso rappresenta una perfetta armonia tra didattica e robotica, programmato in C-like con l'ausilio della libreria del progetto Otto DIY.
Il design del suo corpo è stato riadattato per contenere perfettamente sensori ed evitare piccoli errori di progettazione precedentemente riscontrati dal modello originale.


### 📦 Requisiti
- Arduino Nano (1pz)
- Scheda d'espansione (1pz)
- Servo Motori
- Modulo Bluetooth HC-06
- Modello stampato in 3D
- [IDE di Arduino](https://www.arduino.cc/en/software)

## 🚀 Come usarlo
Prima di tutto, è indispensabile scaricare ed installare la libreria [Otto DIY Robot per Arduino](https://github.com/OttoDIY/OttoDIYLib) precedentemente citata anche nei requirements. Successivamente è necessario aprire il file .zip, e caricarlo nell'IDE di Arduino secondo questi passaggi: Sketch --> Includi Libreria --> Includi Libreria da file .zip.

Successivamente aprire il file Arduino (con estensione .ino) e consentire, alla richiesta, la creazione di una cartella dedicata.

**P.S.** Per far funzionare il robot con i comandi remoti è necessario installare anche un terminale bluetooth seriale (questo è quello da noi usato: [Bluetooth Serial Terminal](https://apps.microsoft.com/detail/9wzdncrdfst8?ocid=pdpshare&hl=en-us&gl=US)).


## 💻 Un po' di codice
Il codice può essere diviso in varie parti principali:
- importazione librerie
- dichiarazione variabili e macro
- movimento dei servo motori

Nel progetto sono state incluse **3 librerie fondamentali**:
- `Servo.h`: offre la possibilità di cambiare l'angolo dei servo motori con alta precisione
- `SoftwareSerial.h`: consente la comunicazione seriale con i pin digitali
- `Otto.h`: consente di implementare funzioni utili come `Otto.walk()` per facilitare la scrittura del codice

Nella sezione delle variabili e delle macro sono presenti le variabili per la comunicazione con i moduli, led, servo motori, e delle note.
Nella parte delle note è stata assegnata a ciascuna nota una frequenza, in modo da rendere più semplice e comprensibile la dichiarazione dell'array delle melodie.
Nella parte delle variabili sono presenti le dichiarazioni per ogni servo motore e sensore.

Nel progetto, inoltre, si può notare una parte di *controllo tramite bluetooth*. Sono settati vari comandi grazie ai quali si può comandare il robot in modalità remota connettendolo ad un terminale seriale bluetooth. I **comandi disponibili** sono i seguenti:
- `a`: alzare/abbassare braccio sinistro
- `b`: alzare/abbassare braccio destro
- `c`: alzare/abbassare entrambe le braccia
- `d`: alzare/abbassare entrambe le braccia simultaneamente
- `e`: camminare avanti e fermarsi se si stava già camminando
- `f`: camminare indietro e fermarsi se si stava già camminando
- `g`: girare a sinistra (facendo 5 passi)
- `h`: girare a destra (facendo 5 passi)
- `i`: suona la melodia *Happy Birthday*
- `j`: suona la melodia *We Wish You a Merry Christmas*
- `k`: suona la melodia *Never Gonna Give You Up*


## ⚙️ Features
- [x] Movimenti
	- [x] alzare/abbassare braccio sinistro
	- [x] alzare/abbassare braccio destro
	- [x] alzare/abbassare entrambe le braccia
	- [x] alzare/abbassare entrambe le braccia simultaneamente
	- [x] camminare avanti
	- [x] camminare indietro
	- [x] girare a sinistra (facendo 5 passi)
	- [x] girare a destra (facendo 5 passi)
- [ ] Melodie
	- [ ] Star Wars Theme
	- [ ] Tetris Theme
	- [ ] Pink Panther Theme
	- [x] Happy Birthday
	- [x] We Wish You a Merry Christmas
	- [ ] Fur Elise - Beethoven
	- [x] Rick Astley - Never Gonna Give You Up