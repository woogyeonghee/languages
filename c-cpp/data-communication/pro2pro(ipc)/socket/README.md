
# server

1. socket() 데이터 소켓 생성 

2. bind() (주소, port) 소켓으로 묶음

3. listen() 데이터 소켓을 listen 소켓으로 변경

4. accept() client connect이 올 때까지 기다렸다가 오면 해당 클라이언트에 연결되도록 새로운 데이터 소켓생성 