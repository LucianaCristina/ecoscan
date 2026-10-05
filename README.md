# EcoScan (Varredura Ecológica) ♻️💻

> Software em C desenvolvido no IFG Câmpus Jataí para a conscientização ambiental e facilitação da logística reversa de lixo eletrônico.

---

## 📌 Sobre o Projeto

O **EcoScan** é um sistema interativo desenvolvido por discentes do curso de **Análise e Desenvolvimento de Sistemas (IFG - Câmpus Jataí)**. O objetivo principal é mitigar os impactos socioambientais do descarte inadequado de componentes eletrónicos na região de Goiás, fornecendo orientação sobre tempo de decomposição, riscos de metais pesados e mapeamento verídico de ecopontos regionais.

O projeto inclui o **EcoQuiz**, um módulo gamificado que aplica conceitos de lógica, hardware, termos técnicos em inglês, normas ambientais e cálculos de impacto ecológico.

---

## 🚀 Funcionalidades Principais

- **Guia Informativo de Resíduos:** Detalhes de decomposição e descarte seguro para celulares, computadores, lâmpadas LED, pilhas e outros componentes.
- **Mapeamento de Ecopontos:** Indicação de pontos de recolha especializados nas cidades de Jataí, Mineiros, Rio Verde e Goiânia.
- **EcoQuiz Gamificado:** Questionário educativo com cálculo de pontuação acumulada e *feedback* explicativo e imediato.
- **Código Portável:** Estrutura otimizada em ANSI C para ser executada em Windows, Linux e macOS.

---

## 🛠️ Tecnologias Utilizadas

- **Linguagem:** C (ANSI C)
- **Bibliotecas:** `<stdio.h>`, `<stdlib.h>`, `<string.h>`
- **Compilador Recomendado:** GCC / MinGW

---

## 🔧 Como Compilar e Executar

1. Clone este repositório:
   ```bash
   git clone [https://github.com/seu-usuario/ecoscan-c-app.git](https://github.com/seu-usuario/ecoscan-c-app.git)
   cd ecoscan-c-app/src
   ```

2. Compile o código com o GCC:
   ```bash
   gcc main.c -o ecoscan
   ```

3. Execute o programa:
   - **Linux / macOS:**
     ```bash
     ./ecoscan
     ```
   - **Windows:**
     ```cmd
     ecoscan.exe
     ```

---

## 📊 Fluxo de Execução

```text
[Início] ➔ [Menu Principal] ➔ [Consulta de Resíduos / Ecopontos / EcoQuiz] ➔ [Exibição de Resultados] ➔ [Fim]
```

---

## 👥 Equipa de Desenvolvedores

- **Bruna Freitas Terra**
- **Emerson Mateus Kipper**
- **Eyshila Cruz do Carmo**
- **Luciana Cristina de Sousa**

**Docente Orientador:** Prof. Célio Bernardo de Lima  
**Instituição:** Instituto Federal de Educação, Ciência e Tecnologia de Goiás (IFG - Câmpus Jataí)
