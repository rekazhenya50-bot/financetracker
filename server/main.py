from fastapi import FastAPI

app = FastAPI()

@app.get("/capital")
def get_capital():
    return {"capital": 500}
