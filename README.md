> Read this page in [English](docs/Readme.en.md)


<h1 align="left"> VSSS (Very Small Size Soccer)</h1>


<p align="center">
<img loading="lazy" src="http://img.shields.io/static/v1?label=STATUS&message=EM%20DESENVOLVIMENTO&color=GREEN&style=for-the-badge"/>
</p>

![vss](https://github.com/user-attachments/assets/a9e7e197-5df7-4a00-863c-3f58627b3f20)
<h1 align="left"> Descrição do Projeto </h1>

 
A categoria **Very Small Size Soccer** (VSSS) é uma das modalidades da RoboCup voltada para a simulação de partidas de futebol com robôs autônomos de pequeno porte. Cada time utiliza até três robôs circulares com no máximo 7,5 cm de diâmetro, em um campo de 1,5 m x 2 m. O sistema é controlado por uma câmera posicionada acima do campo, que envia dados em tempo real para um computador central responsável por processamento de visão, estratégia e tomada de decisão. As instruções são então transmitidas para os robôs via comunicação sem fio.

A VSSS integra áreas como visão computacional, inteligência artificial, controle e robótica móvel, sendo uma excelente plataforma para o desenvolvimento prático de soluções autônomas em tempo real. Além disso, promove o trabalho em equipe, inovação e o espírito competitivo entre estudantes e pesquisadores.

## 📚 Índice

- [Regras da Categoria](#regras-da-categoria)
- [Materiais Utilizados](#materiais-utilizados)
- [Hardware](#hardware)
- [Software](#software)
- [Como Montar o Meu VSSS](#como-montar-meu-vsss)

## Regras da Categoria
### Resumo das Regras – VSSS (Very Small Size Soccer)
## Objetivo
Simular uma partida de futebol entre dois times de robôs autônomos com foco em estratégia, controle e tomada de decisão em tempo real.

## Robôs
Máximo por time: 3 robôs em campo (mais reservas permitidos).

Tamanho: Cada robô deve caber em um cilindro de 75 mm de diâmetro e 15 cm de altura.

Autonomia: Todos os robôs devem ser totalmente autônomos, sem controle humano direto durante o jogo.

## Campo
Dimensões: 1,5 m x 2 m.

Formato: Retangular, com marcações de campo semelhantes a um campo de futebol (meio-campo, área de gol, linhas laterais).

Paredes: Não há paredes — a bola e os robôs podem sair pela lateral (gerando reposição).

## Visão e Sistema de Controle
Sistema de visão global: Uma câmera posicionada acima do campo capta as posições dos robôs e da bola.

Um computador central processa as informações e decide as ações, enviando comandos via rádio aos robôs.

Cada time tem seu próprio sistema de controle.

## Duração do Jogo
2 tempos de 5 minutos, com intervalo de 1 minuto.

Cronômetro só roda com a bola em jogo.

## Gol e Pontuação
O time marca quando a bola cruza completamente a linha de gol.

Ganha quem tiver mais gols ao final da partida.

Em caso de empate, pode haver prorrogação ou disputa de pênaltis (dependendo do evento).

## Faltas e Penalidades
Contato físico excessivo entre robôs é penalizado.

Robôs não podem ficar parados bloqueando o gol por muito tempo (regra de "obstrução").

Robôs fora de controle ou com falhas devem ser removidos rapidamente.

Penalidades podem incluir remover o robô por alguns segundos ou posse de bola para o outro time.

## Reposições de Bola
Quando a bola sai, o juiz (ou sistema automático) faz a reposição no local apropriado.

O jogo recomeça após o reposicionamento.

## Inspeção Técnica
Antes das partidas, os robôs são avaliados quanto:

Às dimensões,

Peso (se exigido),

Funcionamento dos sistemas de controle,

Autonomia (não pode ter interferência externa).

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦

## Materiais Utilizados 
1 VSSS
- 1 Placa de Circuito (PCB, Protoboard)  
- 1 Arduino NANO  
- 1 Módulos NRF24L01  
- 1 MPU6050  
- 1 Mini Ponte h L298n  
- 2 Motores DC

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦
## Software
### PCB
- Fusion 360
### Código
### Simulação
🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦
## Hardware
#### Ligação dos Componentes
🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦
## Como montar meu VSSS

https://docs.google.com/document/d/1Gx1FeZU1V7xuebESt6DnqYbtGiYW-2jLfToopUDha7g/edit?usp=sharing

🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦🟦


