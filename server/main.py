from fastapi import FastAPI

app = FastAPI()

@app.get("/capital")
def get_capital():
    return {"capital": 500}

# http://127.0.0.1:8000/hello/bohdan

@app.get("/hello/{name}")   # дірка 1: як назвати змінну частину адреси
def hello(name):            # дірка 2: що функція приймає ззовні
    return "Hello, " +name         # дірка 3: рядок "Привіт, " + ім'я