FROM ubuntu:24.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
    flex \
    bison \
    gcc \
    g++ \
    curl \
    && curl -fsSL https://deb.nodesource.com/setup_18.x | bash - \
    && apt-get install -y nodejs \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY package*.json ./
RUN npm install

COPY . .

RUN cd /app/compiler/src && \
    flex semaction.l && \
    g++ -o action.o lex.yy.c -ll && \
    ./action.o < parser_empty.y && \
    rm lex.yy.c action.o && \
    bison -d parser.y && \
    flex lexer.l && \
    g++ -o /app/compiler/WCTC.o parser.tab.c lex.yy.c node.cpp symbol_table.cpp tac.cpp x86.cpp main.cpp -ll && \
    rm -rf lex.yy.c parser.tab.* parser.output parser.y

RUN mkdir -p /app/temp

EXPOSE 5000

CMD ["node", "server.js"]