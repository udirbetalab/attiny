# attiny

<h2>Hvordan programmere ATtiny mikrokontroller ved hjelp av en Arduino Uno</h2>
Hentet fra: https://create.arduino.cc/projecthub/arjun/programming-attiny85-with-arduino-uno-afb829
<br>


<img src="https://github.com/udirbetalab/attiny/blob/master/files/arduino-attiny_bb.png">
<br>
Du trenger:

1x Arduino Uno<br>
1x Attiny85<br>
1x 10uF kondensator<br>
1x koblingsbrett<br>
6x jumperkabler<br>
<br>
Koble opp delene som vist på tegningen. 
<br>
Siden Arduino IDE programvaren ikke kommer med støtte for ATtiny, må dette legges til manuelt.
<vr>
Kopier adressen under
<pre>
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
</pre>
Gå til Fil -> Instillinger og legg til linken over i feltet <b>Flere "Boards Manager" URLer</b><br>
<img src="https://github.com/udirbetalab/attiny/blob/master/files/nye_kort_Arduino.png">
<br>
Før du kan overføre dine koder til ATtiny ved hjelp av Arduino Uno er det noen ting du må gjøre.
<br>
1. klargjøring av Arduino Uno.<br>
  Arduino Uno må ha rett kode installert.<br>
  Velg Arduino Uno som kort og rett USB port under verktøy.<br>
  Gå til fil -> eksempler -> 11.ArduinoISP -> ArduinoISP og hent koden<br>
  Overfør koden til Arduino uten at kondensatoren er koblet til.<br>
  Etter overføing av koden setter du tilbake kondensatoren.<br>
  
2. klargjøring av ATtiny<br>
  ATtiny kommer ofte standard med 1 Mhz intern klokke. Det anbefales at den oppgraderes til 8 Mhz.
  Velg ATtiny som kort.<br>
  Klokke til 8Mhz intern (Ikke bruk ekstern!!).<br>
  Bruk samme port som Arduino Uno har på din datamaskin.<br>
  Klikk på "Skriv oppstartslaster" / "Burn Bootloader".<br>
  ATtiny er nå klar for overøring av koder.<br>

<img src="https://cdn.sparkfun.com/r/600-600/assets/f/8/f/d/9/52713d5b757b7fc0658b4567.png"><i><sub>Drawing from Sparkfun</i></sub> 
  
 3. første program på ATtiny - Blink<br>
  Gå til fil -> eksempler -> 01.Basics -> Blink.<br>
  Gå inn i koden og endre LED_BUILTIN / 13 til 0 som er pine 5 på ATtiny.<br>
  Verifiser koden og overfør deretter koden til ATtiny.<br>
  Når koden er overført kan du koble fra ATtiny og prøve den i en enkel krets som vist under.<br>
  
  
  

