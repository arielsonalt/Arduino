import serial
import speech_recognition as sr 
import pyttsx3
Ana = pyttsx3.init('sapi5')
Ana.setProperty('voice',b'brazil')
r = sr.Recognizer()

comando = 0 
ser = serial.Serial('com3',115200)

while comando != "finalizar":
    with sr.Microphone() as  s:
        r.adjust_for_ambient_noise(s)
        audio = r.listen(s)
        comando = r.recognize_google(audio,language='pt')
        
    if comando == "desligar":
        Ana.say("Desligando")
        print("Desligando..")
        Ana.runAndWait()  
    if comando == "finalizar":
        Ana.say("Finalizando")
        print("Finalizado")
        Ana.runAndWait() 
    if comando == "ligar":
        Ana.say("Ligando")
        print("Ligando..")
        Ana.runAndWait() 
    

    ser.write(comando.encode())
ser.close()

