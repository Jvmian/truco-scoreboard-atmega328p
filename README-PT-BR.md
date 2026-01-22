# Marcador de Truco – ATmega328P

Marcador eletrônico de Truco desenvolvido com o microcontrolador **ATmega328P**, utilizando **placa de circuito impresso própria**, firmware embarcado em **C++** e um **protótipo físico totalmente funcional**.

O sistema é alimentado por uma **fonte de alimentação regulável desenvolvida pelo próprio grupo**, garantindo tensão estável e adequada ao funcionamento do circuito eletrônico.

O projeto teve como foco os fundamentos de **sistemas embarcados**, integração hardware–software e validação prática por meio de simulação e testes reais.

---

## 📌 Visão Geral do Projeto

O Marcador de Truco é um sistema embarcado dedicado à contagem e exibição de pontos do jogo, projetado para operar de forma simples, confiável e independente.

A placa do projeto possui um **Arduino integrado**, utilizando o microcontrolador **ATmega328P**, responsável por toda a lógica de controle do sistema.

O desenvolvimento seguiu um fluxo de engenharia bem definido:

1. Concepção do sistema e definição da lógica de funcionamento  
2. Desenvolvimento do esquema elétrico e simulação no **TinkerCAD**  
3. Programação do microcontrolador em **C++**  
4. Projeto da placa de circuito impresso (PCB)  
5. Montagem do protótipo físico  
6. Testes e validação do funcionamento real do sistema  

---

## ⚙️ Tecnologias e Ferramentas

- **Microcontrolador:** ATmega328P  
- **Plataforma embarcada:** Arduino integrado  
- **Linguagem de Programação:** C++  
- **Simulação e Esquemático:** TinkerCAD  
- **Projeto da PCB:** Arquivo `.pcb` (placa personalizada)  
- **Alimentação:** Fonte regulável desenvolvida pelo grupo  
- **Área de estudo:** Sistemas embarcados e eletrônica  

---

## 🧠 Arquitetura do Sistema

- O **ATmega328P** é responsável por realizar a leitura das entradas do sistema e controlar a lógica de pontuação.
- Os dispositivos de saída exibem a pontuação atual da partida.
- O firmware gerencia a contagem de pontos, mudanças de estado e o funcionamento geral do sistema.
- O esquema elétrico foi desenvolvido e validado no **TinkerCAD** antes da montagem do protótipo físico.
- A alimentação é fornecida por uma **fonte regulável própria**, garantindo estabilidade elétrica ao sistema.

---

## 🎮 Funcionamento do Sistema

O funcionamento do marcador é baseado em **seis botões físicos**, organizados da seguinte forma:

- **Botão de decremento do Jogador 1**
- **Botão de incremento do Jogador 1**
- **Botão de Reset**
- **Botão de Truco**
- **Botão de decremento do Jogador 2**
- **Botão de incremento do Jogador 2**

### 🔘 Controle de Pontuação
Cada jogador possui dois botões dedicados:
- Um botão para **incrementar** a pontuação
- Um botão para **decrementar** a pontuação, permitindo correções durante a partida

### 🃏 Botão de Truco
O botão de **Truco** aplica automaticamente o valor correspondente à jogada, conforme a lógica implementada no firmware, facilitando a contagem correta dos pontos durante o jogo.

### 🔄 Botão de Reset
O botão de **Reset** reinicia completamente a partida, zerando a pontuação dos dois jogadores de forma rápida e segura.

O microcontrolador **ATmega328P** realiza a leitura contínua dos botões, processa a lógica do jogo e atualiza as saídas responsáveis pela exibição da pontuação, garantindo um funcionamento estável e confiável.

---

## 🧪 Simulação

O **mesmo arquivo do projeto no TinkerCAD** foi utilizado para:

- Desenvolvimento do esquema elétrico  
- Simulação do circuito  
- Validação do funcionamento lógico do sistema  

Esse processo permitiu identificar e corrigir erros antes da construção da placa física, aumentando a confiabilidade do projeto.

---

## 🔧 Hardware

- Placa de circuito impresso personalizada (PCB própria)
- Protótipo físico montado e testado
- Sistema embarcado funcionando de forma independente (standalone)
- Alimentação realizada por **fonte regulável desenvolvida pelo grupo**

O arquivo original da PCB está incluído no repositório para fins de documentação e referência técnica.

---

## 🎥 Mídia

O repositório contém:
- Fotos do protótipo montado
- Vídeo demonstrativo com o sistema em funcionamento

Esses materiais comprovam a implementação real e a validação prática do projeto.

---

## 📂 Estrutura do Repositório

truco-scoreboard-atmega328p/
│
├── firmware/ # Código embarcado em C++
├── hardware/ # Arquivo da PCB e esquemático
├── simulation/ # Projeto do TinkerCAD (esquemático + simulação)
├── media/ # Fotos e vídeo de demonstração
├── docs/ # Documentação do projeto
├── README.md
└── README-PT-BR.md

---

## 📄 Documentação

A documentação completa do projeto está disponível na pasta `docs/`, incluindo:
- Descrição detalhada do sistema
- Decisões de projeto
- Explicação do funcionamento geral

---

## 👥 Contribuições no Projeto

Este projeto foi desenvolvido como um trabalho acadêmico em grupo, com responsabilidades técnicas bem definidas.

**João Victor Mian Valdomiro**
- Concepção do sistema e coordenação geral do projeto  
- Desenvolvimento do esquema elétrico e simulação no TinkerCAD  
- Programação do firmware em C++ para o ATmega328P  
- Projeto da placa de circuito impresso (PCB)  
- Elaboração da documentação e organização do repositório  

**Kaique Garrocini Miguel**
- Montagem física do protótipo eletrônico  
- Construção da maquete do projeto  
- Apoio nos testes e validação do hardware  

**Paola Lohana Santos Rabelo**  
**Felippe Andreazi**  
**Guilherme Rebequi**
- Apoio geral durante o desenvolvimento do projeto  
- Auxílio nas etapas de testes, validação e conclusão  

Essa divisão de responsabilidades permitiu a implementação e validação bem-sucedida do sistema.

---

## 📜 Licença

Este projeto foi desenvolvido para fins educacionais e de portfólio.
