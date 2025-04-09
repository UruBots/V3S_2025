> Read this page in [English](docs/Readme.en.md)


<h1 align="left"> VSSS (Very Small Size Soccer)</h1>


<p align="center">
<img loading="lazy" src="http://img.shields.io/static/v1?label=STATUS&message=EM%20DESENVOLVIMENTO&color=GREEN&style=for-the-badge"/>
</p>

![image](https://github.com/user-attachments/assets/85888ab1-4472-4e1d-974b-98f749e5b422)
<h1 align="left"> Descrição do Projeto </h1>

 
A categoria VSSS (Very Small Size Soccer) é uma competição de robótica autônoma onde equipes com até 6 robôs de até 7,5 cm de diâmetro e 15 cm de altura competem em uma arena de 1,5 m × 1,3 m. Os robôs são controlados por algoritmos de visão computacional e inteligência artificial, com decisões em tempo real baseadas em imagens capturadas por uma câmera posicionada acima do campo.

## 📚 Índice

- [Resumo das Regras](#resumo-das-regras)
- [Materiais Utilizados](#materiais-utilizados)
- [Hardware](#hardware)
- [Software](#software)
- [Como Montar o Meu VSSS](#como-montar-meu-vsss)

## Resumo das Regras
- Robôs: até 6 por equipe (3 em campo). Máx: 7,5 cm de diâmetro, 15 cm de altura.
- Campo: 1,5 m x 1,3 m, com marcações padrão.
- Bola: laranja, 4 cm de diâmetro (aprox.).
- Partida: 2 tempos de 5 minutos.
- Controle: totalmente autônomo, baseado em visão computacional.
- Infrações: contato excessivo, saída de campo, obstrução indevida.
- Sistema de visão: câmera aérea centralizada e software de processamento em tempo real.

## Materiais Utilizados 
1 VSSS
- 1 Placa de Circuito (PCB/Protoboard)  
- 1 Arduino NANO  
- 1 Módulos NRF24L01  
- 1 MPU6050  
- 1 Mini Ponte h L298n  
- 2 Motores DC

## Software
Na categoria VSSS, o sistema é dividido em dois principais componentes: visão computacional e controle dos robôs, geralmente desenvolvidos em linguagens diferentes para aproveitar suas vantagens.

- Python é utilizado na parte de visão computacional, pois facilita o uso de bibliotecas como OpenCV para processar a imagem da câmera aérea, identificar a posição da bola e dos robôs, e gerar as coordenadas em tempo real.

- C++ é usado no controle dos robôs, pois oferece maior desempenho e precisão no envio dos comandos de movimento e na execução dos algoritmos de estratégia e tomada de decisão.


## Hardware
Os robôs da categoria VSSS são pequenos, autônomos e projetados para atuar com alta precisão em um espaço reduzido. O sistema de hardware é composto por:

- Estrutura: chassi compacto (até 7,5 cm de diâmetro e 15 cm de altura), leve e resistente, geralmente impresso em 3D.

- Locomoção: motores DC com codificadores, usando rodas pequenas e finas para movimentação.

- Controle: uma placa embarcada (Arduino, ESP32) que interpreta comandos via rádio e controla os motores em tempo real.

- Comunicação: módulo de rádio (geralmente 2.4 GHz) para receber os comandos do computador central.

- Eletrônica adicional: drivers de motor (Ponte h), sensores e baterias para alimentação.

## Como montar meu VSSS
https://docs.google.com/document/d/1Gx1FeZU1V7xuebESt6DnqYbtGiYW-2jLfToopUDha7g/edit?usp=sharing




